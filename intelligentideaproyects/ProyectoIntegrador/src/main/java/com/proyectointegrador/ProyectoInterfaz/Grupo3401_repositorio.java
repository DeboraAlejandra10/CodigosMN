package com.ProyectoInterfaz;

import com.proyectointegrador.modelo.AgendaGrupo3401;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;

@Repository //La interfaz va a crear las peticiones Crud
public interface Grupo3401_repositorio extends CrudRepository <AgendaGrupo3401,Long> {

}
