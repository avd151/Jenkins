pipeline {
    agent any
    stages {
        stage("build") {
            sh make
        } 
        stage("execute"){
            sh ./output
        }
    }
}
