#include "WebsocketClientOutput3DWrapper.h"

namespace lsd_slam {
	WebsocketClientOutput3DWrapper::WebsocketClientOutput3DWrapper(std::string inAddr, int inPort) : addr(inAddr), port(inPort) {
		char tmpAddr[128];
		strcpy_s(tmpAddr, addr.c_str());
		wsc = WebSocket::from_direct(tmpAddr, port, "");
	}

	WebsocketClientOutput3DWrapper::~WebsocketClientOutput3DWrapper() {
		wsc->close();
		delete wsc;
	}

	void WebsocketClientOutput3DWrapper::publishKeyframeGraph(KeyFrameGraph* graph) {

	}

	void WebsocketClientOutput3DWrapper::publishKeyframe(Frame* f) {

	}

	void WebsocketClientOutput3DWrapper::updateImage(unsigned char * data) {

	}

	void WebsocketClientOutput3DWrapper::publishTrackedFrame(Frame* f) {

	}

	void WebsocketClientOutput3DWrapper::publishTrajectory(std::vector<Eigen::Matrix<float, 3, 1>> trajectory, std::string identifier) {

	}

	void WebsocketClientOutput3DWrapper::publishTrajectoryIncrement(Eigen::Matrix<float, 3, 1> pt, std::string identifier) {

	}

	void WebsocketClientOutput3DWrapper::publishDebugInfo(Eigen::Matrix<float, 20, 1> data) {

	}
}