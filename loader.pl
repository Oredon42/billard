#!/usr/bin/env perl
use warnings;
use strict;

my $obj=shift;
my $obj_name= substr($obj,0,length($obj)-4);
my $c=$obj_name.".cpp";
my $h=$obj_name.".h";

#tableau de vertices
my @tabv;
#tableau de faces
my @tabq;
my @tabt;

my $ligne;

#ouverture fichier objet et remplissage tableaux f et v
$obj=open(OUTFILE, $obj) or die ("Impossible d'ouvrir le fichier objet".$obj);
my @obj=<OUTFILE>;

foreach my $ligne (@obj)
{
    my @tab=split(" ",$ligne);
    if($tab[0] eq 'v')
    {
        shift @tab;
        $ligne="glVertex3f(".$tab[0].", ".$tab[1].", ".$tab[2].");\n";
        push @tabv, $ligne;
    }
    if($tab[0] eq 'f')
    {
        shift @tab;
        if($#tab==3)
        {
            $ligne=$tab[0]." ".$tab[1]." ".$tab[2]." ".$tab[3];
            push @tabq, $ligne;
        }
        if($#tab==2)
        {
            $ligne=$tab[0]." ".$tab[1]." ".$tab[2];
            push @tabt, $ligne;
        }
    }
}
close OUTFILE;

#création fichier .c
$c=open(OUTFILE2, '>', $c) or die ("Impossible de créer le fichier .c de sortie");

print OUTFILE2 "#include <OpenGL/gl.h>\n#include <OpenGL/glu.h>\n#include <GLUT/glut.h>\n\nvoid creer_".$obj_name."()\n{\n";

if(@tabq)
{
    print OUTFILE2 "\tglBegin(GL_QUADS);\n\n";
    foreach $ligne (@tabq)
    {
        my @tab2=split(" ",$ligne);
        print OUTFILE2 "\tglTexCoord2i(0,0);".$tabv[$tab2[0]-1]."\tglTexCoord2i(1,0);".$tabv[$tab2[1]-1]."\tglTexCoord2i(1,1);".$tabv[$tab2[2]-1]."\tglTexCoord2i(0,1);".$tabv[$tab2[3]-1]."\n";
    }
    print OUTFILE2 "\tglEnd();\n\n";
}

if(@tabt)
{
    print OUTFILE2 "\tglBegin(GL_TRIANGLES);\n\n";
    foreach $ligne (@tabt)
    {
        my @tab3=split(" ",$ligne);
        print OUTFILE2 "\tglTexCoord2i(0,0);".$tabv[$tab3[0]-1]."\tglTexCoord2i(1,1);".$tabv[$tab3[1]-1]."\tglTexCoord2i(0,1);".$tabv[$tab3[2]-1]."\n";
    }
    print OUTFILE2 "\tglEnd();\n";
}
print OUTFILE2 "}";
close OUTFILE2;

#creation fichier .h
$h=open(OUTFILE3, '>', $h) or die ("Impossible de créer le fichier .h de sortie");
print OUTFILE3 "void creer_".$obj_name."();";
close OUTFILE3;