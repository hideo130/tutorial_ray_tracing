#ifndef HITTABLE_H
#define HITTABLE_H

#include "rtweekend.h"

class material;

// 光線が構造体にぶつかったときの情報を記録する．
// 光線が物体にぶつかったときの法線，ぶつかったときのtの値，ぶつかった物体の情報を記録する．
struct hit_record {
    point3 p;
    vec3 normal;
    shared_ptr<material> mat_ptr;
    double t;
    double u;
    double v;
    bool front_face;
    // 法線は物体の中に向かう向きと外に向かう向きの２パターンがある． 
    inline void set_face_normal(const ray& r, const vec3& outward_normal) {
        front_face = dot(r.direction(), outward_normal) < 0;
        normal = front_face ? outward_normal :-outward_normal;
    }

};

class hittable {
    public:
        virtual bool hit(const ray& r, double t_min, double t_max, hit_record& rec) const = 0;
        virtual bool bounding_box(double t0, double t1, aabb& output_box) const = 0;
};

#endif