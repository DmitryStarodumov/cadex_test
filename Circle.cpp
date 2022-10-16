#include "Circle.h"

namespace curves {

	Vector3d Circle::get_point(const double t) const noexcept {
		return m_ellipse.get_point(t);
	}

	Vector3d Circle::get_first_derivative(const double t) const noexcept {
		return m_ellipse.get_first_derivative(t);
	}

	std::string_view Circle::get_name() const noexcept { return "Circle"; }

	double Circle::get_radius() const noexcept { return m_ellipse.get_radius_x(); }

} // namespace curves