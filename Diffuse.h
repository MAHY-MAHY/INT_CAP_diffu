#ifndef DIFFUSE_H
#define DIFFUSE_H

#include <string>
#include <fstream>
#include <iostream>

#include "maillage.h"
#include "cellule.h"

class Diffuse
{
private:
    Maillage *m_M;
    Maillage *m_tmp;
    double m_Tfin;
    int m_nFonc;
    double m_Beta;
    double a;
    double twelth;
    double third;
    double m_CFL;
    int m_nbCellx;
    int m_CL;


public:
    Diffuse(double Tfin,double inf_x, double sup_x,double in_y,double sup_y,int nb_cell,int n_fonc,
	    double CFL,int CL,double Beta);   
      // void Raffinement();
      void solve_diffuse();
      void solution();
      void saveMaillage();

private:
    void init_maill();
    double fonc(double x);
    // double get_dt();
    // double get_Dx();
    // double get_Dy();
    //
    //double zchap_demi(int i,int j);
    double phi_demipp(int i,int j);
    double phi_demipm(int i,int j);
    double phi_demimm(int i,int j);
    double phi_demimp(int i,int j);
    double phi(int i , int j);
    double z_plus(int i, int j,int coor);
    double z_moins(int i, int j,int coor);
    double psix(int i, int j,double u);
    double psiy(int i, int j,double u);
    double gradient_x(int i,int j);
    double gradient_y(int i, int j);
 
};

#endif
