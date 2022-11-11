pipeline {
    agent any
    stages {
        stage("build & execute"){
            sh make
            sh ./output
        }
        stage("build") {
            sh make
        } 
        stage("execute"){
            sh ./output
        }
    }
}
