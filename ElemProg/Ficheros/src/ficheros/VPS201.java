/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ficheros;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
/**
 *
 * @author Silvio
 */
public class VPS201 extends javax.swing.JFrame {

    /**
     * Creates new form VPS201
     */
    public VPS201() {
        initComponents();
        try {
File fichero = new File("texto.txt");
if(fichero.exists()){
etiNombre.setText("Nombre del archivo "+fichero.getName());
etiCamino.setText("Camino "+fichero.getPath());
etiCaminoAbsoluto.setText("Camino absoluto "+fichero.getAbsolutePath());
etiPuedeEscribir.setText("Se puede escribir "+fichero.canRead());
etiPuedeLeer.setText("Se puede leer "+fichero.canWrite());
etiTamanio.setText("Tamaño "+fichero.length());
}
} catch (Exception e) {
etiNombre.setText("Nombre ERROR EN CREACION DE ARCHIVO");
}
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        btnCrear = new javax.swing.JButton();
        btnGuardar = new javax.swing.JButton();
        btnLeer = new javax.swing.JButton();
        jScrollPane1 = new javax.swing.JScrollPane();
        txaEntradaSalida = new javax.swing.JTextArea();
        btnLimpiar = new javax.swing.JButton();
        jPanel1 = new javax.swing.JPanel();
        etiNombre = new javax.swing.JLabel();
        etiCamino = new javax.swing.JLabel();
        etiCaminoAbsoluto = new javax.swing.JLabel();
        etiPuedeLeer = new javax.swing.JLabel();
        etiPuedeEscribir = new javax.swing.JLabel();
        etiTamanio = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        btnCrear.setText("Crear Archivo Vacio");
        btnCrear.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnCrearActionPerformed(evt);
            }
        });

        btnGuardar.setText("Guardar Archivo (agrega)");
        btnGuardar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnGuardarActionPerformed(evt);
            }
        });

        btnLeer.setText("Leer Archivo");
        btnLeer.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnLeerActionPerformed(evt);
            }
        });

        txaEntradaSalida.setColumns(20);
        txaEntradaSalida.setRows(5);
        jScrollPane1.setViewportView(txaEntradaSalida);

        btnLimpiar.setText("Limpiar");
        btnLimpiar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnLimpiarActionPerformed(evt);
            }
        });

        jPanel1.setBorder(javax.swing.BorderFactory.createTitledBorder(null, "Datos del Archivo", javax.swing.border.TitledBorder.DEFAULT_JUSTIFICATION, javax.swing.border.TitledBorder.DEFAULT_POSITION, new java.awt.Font("Segoe UI", 0, 12), new java.awt.Color(0, 0, 0))); // NOI18N

        etiNombre.setText("Nombre");

        etiCamino.setText("Camino");

        etiCaminoAbsoluto.setText("Camino Absoluto");

        etiPuedeLeer.setText("Puede Leer");

        etiPuedeEscribir.setText("Puede Escribir");

        etiTamanio.setText("Tamaño");

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(21, 21, 21)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(etiTamanio)
                    .addComponent(etiPuedeEscribir)
                    .addComponent(etiPuedeLeer)
                    .addComponent(etiCaminoAbsoluto)
                    .addComponent(etiCamino)
                    .addComponent(etiNombre))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(etiNombre)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(etiCamino)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(etiCaminoAbsoluto)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(etiPuedeLeer)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(etiPuedeEscribir)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 12, Short.MAX_VALUE)
                .addComponent(etiTamanio)
                .addContainerGap())
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(36, 36, 36)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(btnGuardar, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(btnCrear, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(btnLeer, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addGap(54, 54, 54)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(btnLimpiar)
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 333, Short.MAX_VALUE)
                    .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addContainerGap(23, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(35, 35, 35)
                        .addComponent(btnCrear)
                        .addGap(18, 18, 18)
                        .addComponent(btnGuardar)
                        .addGap(27, 27, 27)
                        .addComponent(btnLeer))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(18, 18, 18)
                        .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 150, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(btnLimpiar)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void btnCrearActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnCrearActionPerformed
        // TODO add your handling code here:
        try
{
//Crear un objeto File se encarga de crear o abrir acceso a un archivo que se es-pecifica en su constructor
File fichero = new File("texto.txt");
fichero.delete();
try {
fichero.createNewFile();
} catch (Exception e) {
etiNombre.setText("Nombre ERROR EN CREACION DE ARCHIVO");
}
}
//Si existe un problema al escribir cae aqui
catch(Exception e){
etiNombre.setText("Nombre ERROR EN CREACION DE ARCHIVO");
}
txaEntradaSalida.setText("");
etiTamanio.setText("Tamaño "+0);

        
        
    }//GEN-LAST:event_btnCrearActionPerformed

    private void btnGuardarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnGuardarActionPerformed
        // TODO add your handling code here:
    try
{
//Crear un objeto File se encarga de crear o abrir acceso a un archivo que se especi-fica en su constructor
File archivo=new File("texto.txt");
//Escribimos en el archivo con el metodo write
try (//Crear objeto FileWriter que sera el que nos ayude a escribir sobre archi-vo
FileWriter escribir = new FileWriter(archivo,true)) {
//Escribimos en el archivo con el metodo write
escribir.write(txaEntradaSalida.getText());
escribir.flush();
//Refrescaos informacion
if(archivo.exists()){
etiTamanio.setText("Tamaño "+archivo.length());
}
//Cerramos la conexion
escribir.close();
}
}
//Si existe un problema al escribir cae aqui
catch(Exception e)
{
etiNombre.setText("Nombre ERROR EN CREACION DE ARCHIVO");
}    
        
        
        
        
        
    }//GEN-LAST:event_btnGuardarActionPerformed

    private void btnLeerActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnLeerActionPerformed
        // TODO add your handling code here:
        String texto="";
txaEntradaSalida.setText(texto);
try
{
//Creamos un archivo FileReader que obtiene lo que tenga el archivo
FileReader lector=new FileReader("texto.txt");
//El contenido de lector se guarda en un BufferedReader
BufferedReader contenido=new BufferedReader(lector);
//Con el siguiente ciclo extraemos todo el contenido del objeto "contenido" y lo mos-tramos
while((texto=contenido.readLine())!=null){
txaEntradaSalida.setText(txaEntradaSalida.getText()+texto+"\n");}
lector.close();
}
//Si se causa un error al leer cae aqui
catch(Exception e){
etiNombre.setText("Nombre ERROR EN CREACION DE ARCHIVO");
}
        
        
        
        
    }//GEN-LAST:event_btnLeerActionPerformed

    private void btnLimpiarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnLimpiarActionPerformed
        // TODO add your handling code here:
        txaEntradaSalida.setText("");
    }//GEN-LAST:event_btnLimpiarActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(VPS201.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(VPS201.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(VPS201.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(VPS201.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new VPS201().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btnCrear;
    private javax.swing.JButton btnGuardar;
    private javax.swing.JButton btnLeer;
    private javax.swing.JButton btnLimpiar;
    private javax.swing.JLabel etiCamino;
    private javax.swing.JLabel etiCaminoAbsoluto;
    private javax.swing.JLabel etiNombre;
    private javax.swing.JLabel etiPuedeEscribir;
    private javax.swing.JLabel etiPuedeLeer;
    private javax.swing.JLabel etiTamanio;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTextArea txaEntradaSalida;
    // End of variables declaration//GEN-END:variables
}
