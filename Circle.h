#pragma once

#include "Curve.h"
#include "Ellipse.h"

namespace curves {

	class Circle : public Curve {
	private:
		const Ellipse m_ellipse;

	public:
		explicit Circle(const double radius) : m_ellipse(radius, radius) {}

		Circle(const Circle&) = delete;
		Circle(Circle&&) = delete;

		Circle& operator=(const Circle&) = delete;
		Circle& operator=(Circle&&) = delete;

		Vector3d get_point(const double) const noexcept override;
		Vector3d get_first_derivative(const double) const noexcept override;
		std::string_view get_name() const noexcept override;
		double get_radius() const noexcept;
	};

} // namespace curves