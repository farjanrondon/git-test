# Comandos Utiles de GIT:

## $ git init
Inicializar repositorios.

## $ git add .
Preparar **todos** los archivos para un commit.

## $ git reset .
Remover la accion del **git add .**

## $ git commit -m "comentario sobre el commit"
Conservar los cambios y **add**.

## $ git checkout -- .
Reconstruir **todos** los archivos y cambios del ultimo commit.

## $ git log
Listado de los commit.

## $ git commit --amend
Editar el ultimo commit.

## $ git checkout -b <nombre_de_la_rama>
Crear una nueva rama.

## $ git branch
Visualizar las ramas.

## $ git checkout <nombre_de_la_rama>
Cambiar de rama.

## $ git merge <nombre_de_la_rama>
Fusionar ramas, fusiona la rama indicada a la rama en la que se esta posicionado.

## $ git branch -d <nombre_de_la_rama>
Eliminar una rama.

## $ git push
Subir todos los cambios al repositorio.

## $ git commit -am "Comentario"
Hace el trabajo del add y el commit a la vez.

## $ git clone <...enlace_del_repositorio.git>
Clonar un repositorio de GitHub.


# Ante algun error con el GIT PUSH:

	$ git fetch origin main:tmp
	$ git rebase tmp
	$ git push origin HEAD:main
	$ git branch -d tmp
	$ git push -u origin main



# Respuestas para GIT:

## :Q
Volver al **bash**.

## I
Insertar nuevos comentarios en el **git commit --amend**.

## :wq! 
Salir inmediatamente y volver al **bash**.