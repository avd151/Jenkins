pipeline {
    agent any
    stages {
        stage("build"){
            steps{
                echo 'build started'
                sh 'make'
                sh './output'
            }
        }
    }
}
