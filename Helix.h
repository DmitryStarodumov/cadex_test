#pragma once

#define _USE_MATH_DEFINES
#include <math.h>

#include "Curve.h"
#include "Circle.h"

namespace curves {

    class Helix : public Curve {
        static constexpr double M_2PI = M_PI * 2.;

    private:
        const Circle m_circle;
        const double m_step;

    public:
        Helix(const double radius, const double step)
            : m_circle(radius), m_step(step) {}

        Helix(const Helix&) = delete;
        Helix(Helix&&) = delete;

        Helix& operator=(const Helix&) = delete;
        Helix& operator=(Helix&&) = delete;

        Vector3d get_point(const double) const noexcept override;
        Vector3d get_first_derivative(const double) const noexcept override;
        std::string_view get_name() const noexcept override;
    };

} // namespace curves