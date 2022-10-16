#include "Helix.h"

namespace curves {

	Vector3d Helix::get_point(const double t) const noexcept {
		return m_circle.get_point(t).with_z(m_step * (t / M_2PI));
	}

	Vector3d Helix::get_first_derivative(const double t) const noexcept {
		return m_circle.get_first_derivative(t).with_z(m_step / M_2PI);
	}

	std::string_view Helix::get_name() const noexcept { return "Helix"; }

} // namespace curves