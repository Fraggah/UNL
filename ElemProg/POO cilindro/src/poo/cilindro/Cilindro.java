/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package poo.cilindro;


/**
 *
 * @author Silvio
 */
public class Cilindro {                       //definicion de clase
    private double radio, altura, volumen;    //atributos de la clase privados
    public void setRA(double r, double a){    //Asignacion de valores a radio y altura
        radio=r;
        altura=a;
    }
    public double getRadio(){                 //Metodo para devolver valor de radio
        return radio;
    }
    public double getAltura(){
        return altura;                         //Metodo para devolver altura
    }
    public void calcularVolumen(){
        volumen=Math.PI*Math.pow(radio,2)*altura; //Metodo Calcula volumen    
    }
    public double getVolumen(){                    //Metodo para devolver volumen  
        return volumen;
    }
}
