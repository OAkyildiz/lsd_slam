#pragma once

#include "IOWrapper/Output3DWrapper.h"
#include "easywsclient.hpp"

namespace lsd_slam {

	class Frame;
	class KeyFrameGraph;

	struct GraphConstraint {
		int from;
		int to;
		float err;
	};

	using namespace easywsclient;

	class WebsocketClientOutput3DWrapper : public Output3DWrapper {
	private:
		WebSocket::pointer wsc;
		std::string addr;
		int port;
	public:
		WebsocketClientOutput3DWrapper(std::string inAddr = "localhost", int inPort = 9000);
		virtual ~WebsocketClientOutput3DWrapper();

		virtual void publishKeyframeGraph(KeyFrameGraph* graph);

		// publishes a keyframe. if that frame already existis, it is overwritten, otherwise it is added.
		virtual void publishKeyframe(Frame* f);

		virtual void updateImage(unsigned char * data);

		// published a tracked frame that did not become a keyframe (i.e. has no depth data)
		virtual void publishTrackedFrame(Frame* f);

		// publishes graph and all constraints, as well as updated KF poses.
		virtual void publishTrajectory(std::vector<Eigen::Matrix<float, 3, 1>> trajectory, std::string identifier);

		virtual void publishTrajectoryIncrement(Eigen::Matrix<float, 3, 1> pt, std::string identifier);

		virtual void publishDebugInfo(Eigen::Matrix<float, 20, 1> data);
	};
}
