/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tp2ss;




import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Scanner;


/**
 *
 * @author Silvio
 */
public class ListaAlumnos {
    
    ArrayList<Alumno> alumnos;
    
    public ListaAlumnos(){
        
    }  
    
    public void crearArrayList(){
        alumnos = new ArrayList();
    }
public void insertarAlumno(Alumno alumno){
    
    alumnos.add(alumno);
}  

public String devolverInformacion(){
    
    String reporte= "";
    for(int contador=0;contador<alumnos.size();contador++){
       
        reporte+=alumnos.get(contador).getNombre()+" "+alumnos.get(contador).getDocumento()+" "+alumnos.get(contador).getMateria()+" "+alumnos.get(contador).getCalificacion()+"\n";
    }
    return reporte;
}

public boolean eliminarAlumno(String documento){
    boolean encontrado=false;
    for(int contador=0;contador<alumnos.size();contador++){
        if(alumnos.get(contador).getDocumento().equals(documento)){
            encontrado=true;
            alumnos.remove(contador);
        }
    }
    return encontrado;
}

public void guardarArchivo() throws IOException {
    FileWriter fw = new FileWriter("listaAlumnos.txt", false);
        File archivo = new File("listaAlumnos.txt");
        FileWriter escribir;
        try {
            escribir = new FileWriter(archivo, false);
            PrintWriter linea = new PrintWriter(escribir);
            for (Alumno a : alumnos) {
                linea.println(a.getNombre() + "," + a.getDocumento() + "," + a.getMateria() + "," + a.getCalificacion());
            }
            linea.close();
            escribir.close();
        } catch (Exception e) {
            System.out.println("Error al escribir el archivo");
        }
    }
public void abrirArchivo() {
       File archivo = new File("listaAlumnos.txt");
ArrayList<Alumno> nuevaLista = new ArrayList<Alumno>();
try (Scanner lector = new Scanner(archivo)) {
    while (lector.hasNextLine()) {
        String linea = lector.nextLine();
        String[] campos = linea.split(",");
        String nombre = campos[0];
        String documento = campos[1];
        String materia = campos[2];
        String calificacion = campos[3];
        Alumno alumno = new Alumno(nombre, documento, materia, calificacion);
        nuevaLista.add(alumno);
    }
} catch (FileNotFoundException ex) {
    System.out.println("El archivo no se encuentra");
}
this.alumnos = nuevaLista;
}
}











