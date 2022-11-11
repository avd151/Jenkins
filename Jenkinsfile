pipeline {
    agent any
    stages {
        stage("build & execute"){
            echo 'build started'
            sh 'make'
            sh './output'
        }
        stage("build") {
            sh 'make'
        } 
    }
}
