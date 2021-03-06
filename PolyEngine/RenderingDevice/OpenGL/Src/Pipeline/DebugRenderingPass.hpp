#pragma once

#include <Defines.hpp>
#include "Pipeline/RenderingPassBase.hpp"
#include "Proxy/GLShaderProgram.hpp"

namespace Poly
{
	class Scene;
	class AARect;

	//------------------------------------------------------------------------------
	class DebugRenderingPass : public RenderingPassBase
	{
	public:
		DebugRenderingPass(const GLRenderingDevice* rdi);

	protected:
		void OnRun(Scene* world, const CameraComponent* camera, const AARect& rect, ePassType passType) override final;
	};
}