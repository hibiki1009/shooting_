#include "SphereCollider.h"
#include<math.h>
//#include "BoxCollider.h"


SphereCollider::SphereCollider()
{
    radius = 5;
}

SphereCollider::SphereCollider(int _radius)
{
    radius = _radius;// �����̔��a
}


bool SphereCollider::HitSphere(SphereCollider* spherecollider)const
{
   

    bool ret = false;//�Ԃ�l

    float distance;	//���S���W�̋���

    //���S���W�̋����̌v�Z    �֐��擾�l�����葤  location ���@������
    distance = sqrtf(powf(spherecollider->GetLocation().x - location.x, 2) + powf(spherecollider->GetLocation().y - location.y, 2));

    if (distance < radius + spherecollider->GetRadius()) //�����蔻��
    {
        ret = true;// Hit
    }

    return ret;
}

int SphereCollider::GetRadius()const
{
    return radius;
}

Location SphereCollider::GetLocation()
{
    return location;
}

// �����܂�

//SphereCollider::SphereCollider()
//{
//}
//
//SphereCollider::~SphereCollider()
//{
//}
//// �v���C���[�A�G�p
//int SphereCollider::GetSphere(int& _x, int& _y, float& _r)
//{
//    /*_x = sphere.locationX;
//    _y = sphere.locationY;
//    _r = sphere.radius;*/
//
//    /*printfDx("%d", sphere.locationX);*/
//    return 0;
//}
//
// //�e�ۗp
//int SphereCollider::GetBulletSphere(int& _x, int& _y, float& _r)
//{
//     Bullet_sphere.locationX = _x;
//     Bullet_sphere.locationY = _y;
//     Bullet_sphere.radius = _r;
//
//     return 0;
//}
//
//
//int SphereCollider::CheckCollision(SphereCollider sphereCollider) const {
//    Sphere other;// player
//    sphereCollider.GetSphere(other.locationX, other.locationY, other.radius);// Bullet
//        if (sphere.locationX <= other.locationX) {
//            return TRUE;
//        }
//        ///*printfDx("%d", sphere.locationX);*/
//        ///*GetSphere(sphere.locationX, other.locationY, other.radius);*/
//        //// 2�_�̋������v�Z����
//        //cos = pow((sphere.locationX - Bullet_sphere.locationX),2);
//        //sin = pow((sphere.locationY - Bullet_sphere.locationY),2);
//    
//        //// 2�̉~�̒��S�̋������o��
//        //tan = sqrt((cos+sin));
//    
//        //// ���a���r �Εӂ��傫���i�d�Ȃ��Ă���j�Ȃ�TRUE
//        //// ����Ǝ��g���d�Ȃ��Ă���Ȃ�q�b�g����
//        //if (tan <= sphere.radius + Bullet_sphere.radius) {
//        //    return TRUE;
//        //}
//    
//        return FALSE;
//}
