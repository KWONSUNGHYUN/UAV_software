/********************************************************
 * Project:			UAV Software
 * Last updated:	2014. 05. 28
 * Developer:		������
 ********************************************************/

#include <stdio.h>
#include <windows.h>
#include "Config/file_find.h"
#include "KLT/SimAT.h"				// To use the CSimAT object
#include "KLT/AerialSimulator.h"	// To use the CAerialSimulator object
#include "KLT/KLTTracker.h"			// To use the CKLTTracker object
#include "SimAT/AT_SimAT.h"
#include "Orthoimage/ortho_function.h"
#include <time.h>
#include "Ortho_test/ortho.h"

void main(int argc, char *argv[])
{	
	argv[1]="Input_80_170110\\AerialConfig.txt";
	argv[2]="Input_80_170110\\KLTConfigModel.txt";
	argv[3]="Input_80_170110\\SimATConfig.txt";

	clock_t start, end;
	start=clock();

	///*cout << "Config ���� ����" << endl;
	//file_find();*/

	ofstream SaveFile("log.txt");

	//CAerialSimulator AerialSimulator(argv[1]);
	//AerialSimulator.StartAerialSimulator();
	//CKLTTracker KLT(argv[2]);
	//KLT.Startup();
	//CSimAT SimAT(argv[3]);
	//SimAT.Initialization();
	//AerialSimulator.RegisterKLTClient(&KLT);
	//AerialSimulator.RegisterSimAT(&SimAT);
	//SimAT.RegisterKLT(&KLT);
	//AerialSimulator.RunImageExposure();
	//SimAT.PrintOutResults();		
	//end=clock();
	//cout << "���� ��Ī������ ó�� �ð��� "<< (end-start)/CLOCKS_PER_SEC << "�� �Դϴ�"<< endl;	
	//SaveFile << "���� ��Ī������ ó�� �ð��� "<< (end-start)/CLOCKS_PER_SEC << "�� �Դϴ�"<< endl;

	AT_CSimAT AT_SimAT(argv[3]);
	AT_SimAT.RunSimAT();
	//_getch();
	end=clock();
	cout << "���� �������۷��̱����� ��Ī������ ó�� �ð��� "<< (end-start)/CLOCKS_PER_SEC << "�� �Դϴ�"<< endl;
	SaveFile << "���� �������۷��̱����� ó�� �ð��� "<< (end-start)/CLOCKS_PER_SEC << "�� �Դϴ�"<< endl;
	//_getch();

	//orthoimage_start();
	//end=clock();
	//cout << "���翵�� ���������� ��Ī������ ó�� �ð��� "<< (end-start)/CLOCKS_PER_SEC << "�� �Դϴ�"<< endl;
	////SaveFile << "���翵�� ���������� ó�� �ð��� "<< (end-start)/CLOCKS_PER_SEC << "�� �Դϴ�"<< endl;
	////SaveFile.close();
	//_getch();
	//exit(0);

	/*ortho();
	end=clock();
	cout << "���翵�� ���������� ��Ī������ ó�� �ð��� "<< (end-start)/CLOCKS_PER_SEC << "�� �Դϴ�"<< endl;
	_getch();
	exit(0);*/
}