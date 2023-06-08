package com.ProyectoServicio;

import com.proyectointegrador.modelo.AgendaGrupo3401;

import java.util.ArrayList;
import java.util.Optional;

public interface Grupo3401_servicio {
    ArrayList<AgendaGrupo3401> mostrarTodosAlumnos();
    Optional<AgendaGrupo3401> mostrarAlumnoPorId(long id);
    AgendaGrupo3401 guardarAlumno(AgendaGrupo3401 alumnos);
    boolean borrarAlumnoPorId(long id);
    

}
