/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tp2ss;

/**
 *
 * @author Silvio
 */
public class Alumno {
    private String nombre;
    private String documento;
    private String materia;
    private String calificacion;

    public Alumno(String nombre, String documento, String materia, String calificacion) {
        this.nombre = nombre;
        this.documento = documento;
        this.materia = materia;
        this.calificacion = calificacion;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getDocumento() {
        return documento;
    }

    public void setDocumento(String documento) {
        this.documento = documento;
    }

    public String getMateria() {
        return materia;
    }

    public void setMateria(String materia) {
        this.materia = materia;
    }

    public String getCalificacion() {
        return calificacion;
    }

    public void setCalificacion(String calificacion) {
        this.calificacion = calificacion;
    }

    

    
  

}
