#include <iomanip>
#include "Vector3d.h"

namespace curves {

    Vector3d& Vector3d::with_x(const double x) noexcept {
        m_x = x;
        return *this;
    }

    Vector3d& Vector3d::with_y(const double y) noexcept {
        m_y = y;
        return *this;
    }

    Vector3d& Vector3d::with_z(const double z) noexcept {
        m_z = z;
        return *this;
    }

    std::ostream& operator<<(std::ostream& s, const Vector3d& p) {
        return s << "( " << std::setw(9) << p.m_x << ", " << std::setw(9) << p.m_y
            << ", " << std::setw(9) << p.m_z << ")";
    }

} // namespace curves