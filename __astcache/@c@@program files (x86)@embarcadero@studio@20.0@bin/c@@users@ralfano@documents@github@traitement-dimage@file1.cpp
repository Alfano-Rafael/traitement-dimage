#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <Windows.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "SNImage -Etudiants.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	SNImage image;
//	image.Charger("sans titre.bmp");
//
//	cout<<"taille de l'image : "<<image.Largeur()<<"x"<<image.Hauteur()<<endl;
//
//	Coordonee coo={10, 20};
//	Pixel pix={255, 128, 0};
//	image.Dessiner7Segments(10, 20, 10, 2, 0xffA500, "0123456789");
//	image.Dessiner7Segments(10, 40, 10, 2, 0xffA500, "test SNImage") ;
//	image.Dessiner36Segments(10, 60, 10, 2, 0x006400, "012345978" );
//	image.Dessiner36Segments(10, 80, 10, 2, 0x006400, "test SNImage");
//
//	image.Sauvegarder("Resultat.bmp");

	image.Charger("noix.bmp");
	//image.Negatif();
	//image.NiveauDeGris();
	//image.SeuillerNoirBlanc(128);
	//image.Eclaircir(50);
	//image.Assombrir(50);
	//image.RetournerVertical();
	image.RetournerHorizontal();
	image.Sauvegarder("noixre.bmp");
	WinExec("mspaint.exe noixre.bmp",1);
	cin.get();

	return 0;
}
