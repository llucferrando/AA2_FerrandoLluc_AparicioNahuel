#include "Camera.h"

Camera::Camera()
{
	position = glm::vec3(0.5f, 0.5f, -2.f);
	localVectorUp = glm::vec3(0.f, 1.f, 0.f);
	fFov = 45.f;
	fNear = 0.1f;
	fFar = 10.f;


	//camera position = 0;
	//camera rotation = 0
	//cameraMatrixView = lookAt(position, vectorDirector, vector(localVectorUp);
}

/*void Update() {
	switch(estado)
		case orbit:

		case
}

void LookAt()  {
	state = trollState;
	matrixView = lookAt(position, forwardVector, vectorUp);
}

mat4 GetMatrixView(){}
*/