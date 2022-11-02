pipeline {
	agent any
	stages {
		stage("build"){
			steps {
				sh make
			}
		}
		stage("execute"){
			steps {
				sh ./a.out
			}
		}
		stage("clean"){
			steps {
				sh make clean
			}
		}
	}
}
