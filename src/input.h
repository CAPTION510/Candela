#ifndef INPUT_H
#define INPUT_H

#include "gfun.h"

class Input
{
public:
    
	Input();
    ~Input();
    
	// read in the parameters, be called in main.cpp
	void Init(const int argc, char **argv);

	private:

    void Read(const string &fn);
    void Default(void);
    void Check(void);

	public:


	// >>> General <<<
	string calculation; // type of calculations.
	int debug;

	// >>> For function 1 : geo <<< 
	int ext_1;
	int ext_2;
	int ext_3;
	string geo_in;
	string geo_in_type;
	string geo_out; 
	string geo_out_type;
	string geo_directory;
	string headfile;//qianrui add 2020-2-9
	string tailfile;//qianrui add 2020-2-9
	int geo_format;
	int geo_1; // start geometry file for PDF, SSF, ...
	int geo_2; // last geometry file for PDF, SSF, ...
	int geo_interval; // interval between geometries
	int geo_ignore; // how many configurations can be ignored
	int geo_target; // which geo index needed
	int ntype;
	int natom;
	bool cartesian;
	bool write_cartesian = false;
	bool write_name = true;
	bool gamma;//qianrui 2020-2-11
	bool msd_single;//qianrui 2020-2-18
	int msd_type; //qianrui 2020-2-18

	// >>> For function 2 : pdf <<<
	double dr;
	double rcut;
	int pdf_z0; // for pdf 2d
	int pdf_z1; // for pdf 2d
	double rho_ref; // reference density for 2d systems
	double delta; // a criterion used in ion solutions

	// >>> Static Structure Factor <<<
	double struf_dgx;
	double struf_dgy;
	double struf_dgz;
	int struf_ng;
	double struf_avdg; //interval of smooth ssf
	string ssf_out;

	// >>> For function 3 : vel <<< 
	string vel_in;
	string vel_out;
	int ndv; // number of delta v.


	// >>> For function 4 : vacuum <<<
	double vacuum_x1;
	double vacuum_x2;
	double vacuum_y1;
	double vacuum_y2;
	double vacuum_z1;
	double vacuum_z2;

	// >>> For function 5 : 3 dimensional density profile <<<
	int direction;
	string data_in;
	string data_out;

	// >>> For function: pseudopotential <<< 
	int pseudo_z;
	string pseudo_type;
	string pseudo_in;
	string pseudo_out;

	// >>> For function : i profile <<<
	int iprof_nr;
	double iprof_b; // parameters for gaussian broadening,
	// small b leads to sharp curve
	// larger b leads to smooth curve
	int nbin;

	// >>> For function : electron proflie <<<
	int format3D;

	// >>> For Function : dynamics structure factor <<<
	string dsf_out;
	float dsf_dt;
	int dsf_neqi;

	// >>> For Function: cation free energy
	int cfe_model;  // Jianchuan Liu add 2022-09-07

	// for one cation and two OH 
	double dis_oc; // Jianchuan Liu add 2022-09-07
	double model_oh; // Jianchuan Liu add 2022-09-07 // 0: Calculate the OH around Cation, 1: Calculate the OH not around Cation

	int skip_frame; // Jianchuan Liu add 2022-09-07
	double nframe; // Jianchuan Liu add 2022-09-07
	double aroundframe; // Jianchuan Liu add 2022-09-07
	double ptframe; // Jianchuan Liu add 2022-09-07
	double exploreframe; // Jianchuan Liu add 2022-09-07
	double explorear; // Jianchuan Liu add 2022-09-07
	double explorept; // Jianchuan Liu add 2022-09-07
	// reorientation TCF
	double tcf_t; // Jianchuan Liu add 2022-09-07
	double tcf_t0; // Jianchuan Liu add 2022-09-07
	double tcf_dt0; // Jianchuan Liu add 2022-09-07
	double tcf_n; // Jianchuan Liu add 2022-09-07
	double tcf_dt; //  Jianchuan Liu add 2022-09-07
	int tcf_natom; //  Jianchuan Liu add 2022-09-07


	// >>> For Function : velocity correlation functions.
	string velcor_in_type;
	string velcor_directory;
	int velcor_1;
	int velcor_2;
	int velcor_neqi;
	string velcor_out;
	int velcor_atom;
	int step_interval_dynamics;
	bool read_velocity; //qianrui add 2020-5-10

	// >>> For Function : power spectra
	int ps_nv;     // number of velocity autocorrelation functions (VAF) points
	double ps_dw;  // increasement of frequency w
	int ps_nw;     // number of w points
	string ps_in;  // input file name
	string ps_out; // output file name
	double ps_dt;  // increasement of time in VAF

	// >>> For Function : intermediate scattering functions
	float isf_target_q;
	int isf_nconfig;
	int isf_ncorrelation;
	int isf_dcorrelation;
	string isf_outfile;
	int natom1;
	int natom2;
	int natom3;
	int natom4;
	float isf_dg;
	int isf_ng;
    //qianrui add
    int isf_ngx;
    int isf_ngy;
    int isf_ngz;
    int isf_m1,isf_m2,isf_m3;
    double isf_dgx;
    double isf_dgy;
    double isf_dgz;
    int isf_nt1;//qianrui add
    int isf_nt2;//qianrui add
	int isf_config_start;

	// >>> For Function : bond distribution function
	int bdf_nadj;
	double bdf_dtheta;
	int bdf_movie;
	double bdf_rcut;
	string bdf_center;
	double rcut1; // used for adj_bdf
	string ele1; // mohan added 2016-09-26
	string ele2; // mohan added 2016-09-26
	double z0; // range, mohan added 2016-09-26
	double z1; // range, mohan added 2016-09-26

	// >>> For Function : average_ion
	double movement_x;
	double movement_y;
	double movement_z;

	// >>> For Function : insert atoms
	int natom_new;
	string element_new;
	double min_dis;


	// >>> For Functio : triclinic format from LAMMPS geometry file
	int triclinic;

	// >> FOR QE GEOMETRY
	string cell_file;
	double celldm1, celldm2, celldm3;
	double e11, e12, e13, e21, e22, e23, e31, e32, e33;
	string id1;
	string id2;
	string id3;
    string id4;
    bool ion_analysis;

	// for iprof
	int hindex;

	// for ili
	int nx;
	int ny;
	int nz;
	int d;
	double zeta;
	int ntry;
	double dz;	
	double ref_rho;
	double upper_z;
	double x0;
	double y0;
//	double z0;
	double dx;
	double dy;
//	double dz;
	
	// for mdp that based on ili
	string ili_file;
	int u1;
	int u2;
	int u3; // mohan added 2016-11-26
	bool only_hydroxide;
	double a0;
	double a1;
	double mdp0;

	// for water and hydrogen bonds
	string system; 
	double rcut_oo;
	double rcut_oh;
	double rcut_ch; // cutoff of carbon and hydrogen, mohan added 2019-03-17
	double rcut_clo;
	double acut_hoo;
	double d_angle;
	//for wfread //qianrui add 2020-1-6
	string wf_in_type;
	string wfdirectory;
	string multi_directory;//qianrui add 2020-2-9
	//for electric conductivity qianrui add 2020-1-6
	double nele;//QE use double type! qianrui on 2020-2-11
	int nscf;//qianrui on 2020-2-5
	int nkpoint;//2020-2-5
	double fermiE;//qianrui 2020-3-24
	bool  error_con;//To print the std of averaged conductivity (used with nscf) by qianrui 2020-5-13
	
	// amendment between student distribution and normal distribution
	// p = 0.95, N      5,     10,     20, infinity
	//         tpk 2.5706, 2.2281, 2.0860,   1.0000
	// p = 0.99, N      5,     10,     20, infinity
	//         tpk 4.0321, 3.1693, 2.8453,   1.0000
	double tpk;
	double vol;
	double dw;
	double wcut;
	double target_w = 0.2;
	int smear;//linear smear for delta function by default
	bool smearinvw;
	double *fwhm;
	int n_fwhm; //calculate different fwhm at the same time by qianrui 2020-5-13
	bool readvmatrix; 
	int cond_method;
	double cond_dt;
	bool cond_intra = false;

	// for movie
	int snatom;
	int* satom;
	int nacc;
	int ndon;

	// for wannier
	int nbands;
    string wannier_file;
	string eig_file;
	string pos_ili_file;
	double shift;

	// for tradjadj
	int ntzone; 

	string length_unit;


	// for HA index
	bool HA_pdf;
	int HA_nsn;
	int HA_nsb;

	// for mean square displacements (MSD)
	int msd_n; // number of MSD
	double msd_t0; // starting point of MSD
	double msd_t; // length of MSD
	double msd_dt0; // time difference between starting points		
	double msd_dt; // time step 
	int msd_natom; // number of atoms that need MSD to be computed
	bool msd_stokes; // ignore the jumps of proton transfer
	string ele_select; // select the element for MSD

	// for general purpose
	int func; // different functions
	int func_b;
    int func_c; 
	int func_d; // mohan added 2017-12-24
	int func_e;
	double factor;
	double within;
	int maxiter;

	int npoints;
	double dt_snapshots; // mohan added 2018-07-05


	// for infrared spectra
	int tcor;

	// for dielectric constants
	double mu;

	// number of neighbours, for nn5.
	int neighbours; 

	// dipole moments
	string dipole_file;
    string vdipole_file; // mohan added 2019-02-07

	// temperature, default is 330 K
	double temperature;
	
	// for force_reorganize renxi added 20200520
	string force_file;

	
	// for qe_input renxi added 20200521
	string outdir;

	// for PT_snapshot renxi 20200615
	int nPT;
	int geo_target_aft;

	// for PT_snapshot2 renxi 20200628
	double output_interval;
	int nsnapshot;

	// for band_gap renxi 20200912
	int HO; // highest occupied
	int LU; // lowest unoccupied

	// for incremental pdf renxi 20200919
	int nshell;

	// for special_MSD renxi 20200924
	int ia_select;

	// for stress average renxi 20200926
	string stress_geometry;

	//for water_within_distance renxi 20210707
	double radius_inner;
	double radius_outer;

	double vmax;
	double dv;
	double stay_tmax;
	double stay_dt;

	string vel_file;

	double dtheta;

	int nHB_max;
	
	int HB_defination;
	double HB_defination_k;
	double HB_defination_b;	

	double relax_time;
	double theta;
	double dq;
	double theta_min;
	double r_max;
	double r_min;
	double E_max;
	double E_min;
	double dE;

	int pdf_nstd; // Calculate single pdf of such length
	string abacus_version;

	int* Oindex;
	int n_recorded_water;
	double dt_max;

	int non_return;
	double upper_time;
	double lower_time;

	public:
    
	template <class T>
    static void read_value(ifstream &ifs, T &var)
    {
        ifs >> var;
        ifs.ignore(150, '\n');
        return;
    }

	void strtolower(char *sa, char *sb);
	void readbool(ifstream &ifs, bool &var);
};

extern Input INPUT;

#endif //INPUT
