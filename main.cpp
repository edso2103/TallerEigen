/***************************************************
 * Fecha: 19-Agosto-2022
 * Autor: Edna Sofia Orjuela Puentes
 * Tema: Taller de Eigen
 * Materia: Introducción a HPC
 * Tópico: (SOURCE)
 * **************************************************/

#include <stdio.h>
#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>


void ejercicio1 () {

    /*Tipo de dato Matriz 2x2 flotante*/
    typedef Eigen::Matrix<float,2,2>MiMatriz2x2f;

    /*Se declaran las matrices*/
    MiMatriz2x2f A;
    MiMatriz2x2f B;
    MiMatriz2x2f resultado;

    //Se inicializan manualmente
    A<<4,-2,1,-7;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;
    B<<-1,2,6,-5;
    std::cout << "Matriz B\n"<<B << std::endl<< std::endl;

    A=A.array()*3;
    std::cout << "Matriz A*3\n"<<A << std::endl<< std::endl;
    B=B.array()*4;
    std::cout << "Matriz B*4\n"<<B << std::endl<< std::endl;

    resultado=A.array()-B.array();
    std::cout << "El resultado de 3A- 4B es: \n"<<resultado<< std::endl<< std::endl;


}

void ejercicio2 () {


    /*Tipo de dato Matriz 2x2 flotante*/
    typedef Eigen::Matrix<float,2,2>MiMatriz2x2f;

    /*Se declaran las matrices*/
    MiMatriz2x2f A;
    MiMatriz2x2f B;
    MiMatriz2x2f resultado;

    //Se inicializan manualmente
    A<<0,-1,2,1;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;
    B<<1,2,3,4;
    std::cout << "Matriz B\n"<<B << std::endl<< std::endl;

    resultado=B*A;
    std::cout << "El resultado de A*B es: \n"<<resultado<< std::endl<< std::endl;
    resultado*=3;
    std::cout << "El resultado de A*B*3 es: \n"<<resultado<< std::endl<< std::endl;
    A=A.array()*4;
    std::cout << "El resultado de A*4 es: \n"<<resultado<< std::endl<< std::endl;
    resultado.array()-=A.array();
    std::cout << "El resultado de 3BA-4A es: \n"<<resultado<< std::endl<< std::endl;
    resultado.array()/=2;
    std::cout << "El resultado de (3BA-4A)/2 es: \n"<<resultado<< std::endl<< std::endl;



}

void ejercicio3 (){

    /*Tipo de dato Matriz 2x2 flotante*/
    typedef Eigen::Matrix<float,2,2>MiMatriz2x2f;

    /*Se declaran las matrices*/
    MiMatriz2x2f A;
    MiMatriz2x2f B;
    MiMatriz2x2f C;
    MiMatriz2x2f resultado;

    //Se inicializan manualmente
    A<<-3,-2,3,3;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;
    B<<5,3,9,4;
    std::cout << "Matriz B\n"<<B << std::endl<< std::endl;
    C<<1,1,0,0;
    std::cout << "Matriz C\n"<<C << std::endl<< std::endl;

    B.transposeInPlace();
    std::cout << "El resultado de B transpuesta es: \n"<<B<< std::endl<< std::endl;
    std::cout << "La inversa de B es: \n"<<B.inverse()<< std::endl<< std::endl;
    resultado=C*B.inverse();
    std::cout << "El resultado de B*C es: \n"<<resultado<< std::endl<< std::endl;
    std::cout << "La inversa de A es: \n"<<A.inverse()<< std::endl<< std::endl;
    std::cout << "El resultado de AXB^T=C es: \n"<<A.inverse()*resultado<< std::endl<< std::endl;


}


void ejercicio4 () {

    /*Tipo de dato Matriz 2x2 flotante*/
    typedef Eigen::Matrix<float,2,2>MiMatriz2x2f;

    /*Se declaran las matrices*/
    MiMatriz2x2f A;
    MiMatriz2x2f B;
    MiMatriz2x2f resultado;

    //Se inicializan manualmente
    A<<2,1,-4,-3;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;
    B<<2,2,6,4;
    std::cout << "Matriz B\n"<<B << std::endl<< std::endl;
    std::cout << "Matriz A⁻1\n"<<A.inverse()<< std::endl<< std::endl;
    resultado=B*A.inverse();
    std::cout << "El resultado de X=B*A⁻1 es: \n"<<resultado<< std::endl<< std::endl;

}



void ejercicio5 () {

    /*Tipo de dato Matriz NxN double*/
    typedef Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic>MiMatrizd;

    /*Se declaran las matrices*/
    MiMatrizd A(2,3);
    MiMatrizd B(3,2);
    MiMatrizd C(2,2);
    MiMatrizd resultado(2,3);

    A<<3,0,-1,0,2,1;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;
    B<<1,2,1,0,0,6;
    std::cout << "Matriz B\n"<<B << std::endl<< std::endl;
    C<<-2,0,-2,-5;
    std::cout << "Matriz C\n"<<C << std::endl<< std::endl;

    resultado=A*B;
    std::cout << "El resultado de A*B es: \n"<<resultado<< std::endl<< std::endl;
    resultado.array()+=C.array();
    std::cout << "El resultado de A*B+C es: \n"<<resultado<< std::endl<< std::endl;
    resultado.array()*=2;
    std::cout << "El resultado de 2*(A*B+C) es: \n"<<resultado<< std::endl<< std::endl;

}


void ejercicio6 () {

    /*Tipo de dato Matriz 3x3 flotante*/
    typedef Eigen::Matrix<float,3,3>MiMatriz3x3f;

    /*Se declaran las matrices*/
    MiMatriz3x3f A;
    MiMatriz3x3f B;
    MiMatriz3x3f resultado;

    A<<1,5,-1,-1,2,2,0,-3,3;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;
    B<<-1,-4,3,1,-2,-2,-3,3,-5;
    std::cout << "Matriz B\n"<<B << std::endl<< std::endl;

    resultado=B*3;
    std::cout << "El resultado de B*3 es: \n"<<resultado<< std::endl<< std::endl;
    resultado.array()+=A.array();
    std::cout << "El resultado de A+3B es: \n"<<resultado<< std::endl<< std::endl;

}

void ejercicio7 () {

    /*Tipo de dato Matriz 3x3 flotante*/
    typedef Eigen::Matrix<float,3,3>MiMatriz3x3f;

    /*Se declaran las matrices*/
    MiMatriz3x3f A;
    MiMatriz3x3f B;
    MiMatriz3x3f resultado;

    A<<2,7,3,3,9,4,1,5,3;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;
    B<<1,0,2,0,1,0,0,0,1;
    std::cout << "Matriz B\n"<<B << std::endl<< std::endl;

    resultado=B*A.inverse();
    std::cout << "El resultado de B*A⁻1 es: \n"<<resultado<< std::endl<< std::endl;

}


void ejercicio8 () {

    /*Tipo de dato Matriz 3x3 flotante*/
    typedef Eigen::Matrix<float,3,3>MiMatriz3x3f;

    /*Se declaran las matrices*/
    MiMatriz3x3f A;
    MiMatriz3x3f B;
    MiMatriz3x3f resultado;

    A<<1,1,1,6,5,4,13,10,8;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;
    B<<0,1,2,1,0,2,1,2,0;
    std::cout << "Matriz B\n"<<B << std::endl<< std::endl;

    resultado=A.inverse()*B;
    std::cout << "El resultado de A⁻1*B es: \n"<<resultado<< std::endl<< std::endl;

}


void ejercicio9 () {

    /*Tipo de dato Matriz 2x2 flotante*/
    typedef Eigen::Matrix<float,2,2>MiMatriz2x2f;

    /*Se declaran las matrices*/
    MiMatriz2x2f A;
    MiMatriz2x2f resultado;

    A<<3,-1,0,2;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;

    resultado=A.transpose()*A;
    std::cout << "El resultado de A⁻1*A es: \n"<<resultado<< std::endl<< std::endl;
    resultado.array()-=(A.array()*2);
    std::cout << "El resultado de A⁻1*A-2*A es: \n"<<resultado<< std::endl<< std::endl;

}

void ejercicio10 () {

    /*Tipo de dato Matriz 2x2 flotante*/
    typedef Eigen::Matrix<float,2,2>MiMatriz2x2f;

    /*Se declaran las matrices*/
    MiMatriz2x2f A;
    MiMatriz2x2f resultado;

    A<<4,2,-1,0;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;

    resultado=A*A*A;
    std::cout << "El resultado de A³ es: \n"<<resultado<< std::endl<< std::endl;

}

void ejercicio11 () {

    /*Tipo de dato Matriz 2x2 flotante*/
    typedef Eigen::Matrix<float,2,2>MiMatriz2x2f;

    /*Se declaran las matrices*/
    MiMatriz2x2f A;
    MiMatriz2x2f B;
    MiMatriz2x2f C;
    MiMatriz2x2f resultado;

    A<<2,4,3,2;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;
    B<<1,0,2,1;
    std::cout << "Matriz B\n"<<B << std::endl<< std::endl;
    C<<7,5,6,1;
    std::cout << "Matriz C\n"<<C << std::endl<< std::endl;

    A.transposeInPlace();
    resultado=A.inverse()*C*B.inverse();
    std::cout << "El resultado de A^T*X*B=C es: \n"<<resultado<< std::endl<< std::endl;

}

void ejercicio12 () {

    /*Tipo de dato Matriz NxN double*/
    typedef Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic>MiMatrizd;

    /*Se declaran las matrices*/
    MiMatrizd A(2,3);
    MiMatrizd B(3,2);
    MiMatrizd resultado(3,3);

    A<<1,0,-2,2,-1,3;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;
    B<<2,-3,-2,0,-1,-2;
    std::cout << "Matriz B\n"<<B << std::endl<< std::endl;


    resultado=A*A.transpose();
    resultado.array()-=(2*(A*B).array());
    std::cout << "El resultado de A*A^T-2AB es: \n"<<resultado<< std::endl<< std::endl;


}

void ejercicio13 () {

    /*Tipo de dato Matriz NxN double*/
    typedef Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic>MiMatrizd;

    /*Se declaran las matrices*/
    MiMatrizd A(1,3);
    MiMatrizd B(3,2);
    MiMatrizd C(2,1);
    MiMatrizd resultado(3,3);

    A<<4,8,12;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;
    B<<3,2,0,1,-1,0;
    std::cout << "Matriz B\n"<<B << std::endl<< std::endl;
    C<<3,-1;
    std::cout << "Matriz C\n"<<C << std::endl<< std::endl;


    resultado=A*B*C;
    std::cout << "El resultado de A*B*C es: \n"<<resultado<< std::endl<< std::endl;


}

void ejercicio14 () {

    /*Tipo de dato Matriz 3x3 flotante*/
    typedef Eigen::Matrix<float,3,3>MiMatriz3x3f;

    /*Se declaran las matrices*/
    MiMatriz3x3f A;
    MiMatriz3x3f B;
    MiMatriz3x3f resultado;

    A<<3,4,1,-1,-3,3,2,3,0;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;
    B<<3,9,7,1,11,7,7,5,7;
    std::cout << "Matriz B\n"<<B << std::endl<< std::endl;

    resultado=B*A.transpose();
    std::cout << "El resultado de B*A^T es: \n"<<resultado<< std::endl<< std::endl;

}

void ejercicio15 () {

    /*Tipo de dato Matriz 3x3 flotante*/
    typedef Eigen::Matrix<float,3,3>MiMatriz3x3f;

    /*Se declaran las matrices*/
    MiMatriz3x3f A;
    MiMatriz3x3f B;
    MiMatriz3x3f resultado;

    A<<2,5,7,6,3,4,5,-2,-3;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;
    B<<-1,1,0,0,1,1,1,0,-1;
    std::cout << "Matriz B\n"<<B << std::endl<< std::endl;

    resultado=B*A.inverse();
    std::cout << "El resultado de B*A^-1 es: \n"<<resultado<< std::endl<< std::endl;

}

void ejercicio16 () {

    /*Tipo de dato Matriz 4x4 flotante*/
    typedef Eigen::Matrix<float,4,4>MiMatriz4x4f;

    /*Se declaran las matrices*/
    MiMatriz4x4f A;
    MiMatriz4x4f B;
    MiMatriz4x4f resultado;

    A<<1,1,1,1,1,1,-1,-1,1,-1,1,-1,1,-1,-1,1;
    std::cout << "Matriz A\n"<<A << std::endl<< std::endl;
    B<<1,1,0,0,1,0,1,0,1,0,0,1,1,0,1,1;
    std::cout << "Matriz B\n"<<B << std::endl<< std::endl;

    resultado=A.inverse()*B;
    std::cout << "El resultado de A^-1*B es: \n"<<resultado<< std::endl<< std::endl;

}


void menu () {

    int opcion;

        std::cout<<"============================================================================\n";
    std::cout<<"      -                           Menú principal                       -    \n" ;
    std::cout<<"============================================================================\n";
    std::cout<<"A continuación, se encuentran 15 ejercicios usando Eigen. \n\n";
    std::cout<<"============================================================================\n";
    do {
        std::cout<<"\n\n============================================================================\n";

        std::cout<<"Para ver algun ejercicio, por favor digite su respectivo número\n\n\n";
        std::cout<<"1.   Ejercicio #1\n";
        std::cout<<"2.   Ejercicio #2\n";
        std::cout<<"3.   Ejercicio #3\n";
        std::cout<<"4.   Ejercicio #4\n";
        std::cout<<"5.   Ejercicio #5\n";
        std::cout<<"6.   Ejercicio #6 \n";
        std::cout<<"7.   Ejercicio #7\n";
        std::cout<<"8.   Ejercicio #8\n";
        std::cout<<"9.   Ejercicio #9\n";
        std::cout<<"10.  Ejercicio #10\n";
        std::cout<<"11.  Ejercicio #11\n";
        std::cout<<"12.  Ejercicio #12\n";
        std::cout<<"13.  Ejercicio #13\n";
        std::cout<<"14.  Ejercicio #14\n";
        std::cout<<"15.  Ejercicio #15\n";
        std::cout<<"15.  Ejercicio #16\n";
        std::cout<<"17.  Salir\n\n";

        std::cin>>opcion;

        switch ( opcion ){
            case 1:
                ejercicio1();
                break;
            case 2:
                ejercicio2();
                break;
            case 3:
                ejercicio3();
                break;
            case 4:
                ejercicio4();
                break;
            case 5:
                ejercicio5();
                break;
            case 6:
                ejercicio6();
                break;
            case 7:
                ejercicio7();
                break;
            case 8:
                ejercicio8();
                break;
            case 9:
                ejercicio9();
                break;
            case 10:
                ejercicio10();
                break;
            case 11:
                ejercicio11();
                break;
            case 12:
                ejercicio12();
                break;
            case 13:
                ejercicio13();
                break;
            case 14:
                ejercicio14();
                break;
            case 15:
                ejercicio15();
                break;
            case 16:
                ejercicio16();
                break;
        }

    }while (opcion!=17);

}


int main() {
    menu();

    return 0;
}
