#pragma once

#include <iostream>

namespace curves {

    class Vector3d {
    private:
        double m_x;
        double m_y;
        double m_z;

    public:
        Vector3d(const double x, const double y, const double z)
            : m_x(x), m_y(y), m_z(z) {};

        Vector3d(const Vector3d&) = default;
        Vector3d(Vector3d&&) = default;

        Vector3d& operator=(const Vector3d&) = default;
        Vector3d& operator=(Vector3d&&) = default;

        Vector3d& with_x(const double) noexcept;
        Vector3d& with_y(const double) noexcept;
        Vector3d& with_z(const double) noexcept;

        friend std::ostream& operator<<(std::ostream&, const Vector3d&);
    };
} // namespace curves