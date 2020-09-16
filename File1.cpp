#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include <string.h>
#include "SNImage -Etudiants.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	SNImage image;
	image.Charger("sans titre.bmp");
	cout<<"taille de l'image : "<<image.Largeur()<<"x"<<image.Hauteur()<<endl;
	cin.get();

	return 0;
}
