#include "Game.h"

Game TDSGame;

int main(void)
{
	TDSGame.Start();
	GLFWwindow* AppWindow = TDSGame.GetApp().GetWindow();

	// hook mouse move callback and lock/hide mouse cursor.
	//glfwSetCursorPosCallback(AppWindow, OnMouseMove);
	//glfwSetMouseButtonCallback(AppWindow, OnMouseButton);

	//Photon::GetInstance(TTTGame).Connect();

	//std::thread Thread1(&WaitForMessage);

	while (!glfwWindowShouldClose(AppWindow))
	{
		//mu.lock();
		//Photon::GetInstance(TTTGame).Run();
		//mu.unlock();

		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		TDSGame.Update();
		TDSGame.Draw();

		glfwSwapBuffers(AppWindow);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}