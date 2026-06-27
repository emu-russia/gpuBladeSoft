int __cdecl sub_6F82B960(__m64 *a1, __m64 *a2, int a3)
{
  __m64 *v3; // edx@1
  __m64 *v4; // ecx@1

  v3 = (__m64 *)((char *)a1 + 4 * a3);
  v4 = (__m64 *)((char *)a2 + 4 * a3);
  return _mm_cvtsi64_si32(_m_paddw(_m_paddw(_m_paddw(_m_paddw(_m_paddw(_m_paddw(_m_paddw(_m_psadbw((__m64)a1->m64_u64, (__m64)a2->m64_u64), _m_psadbw(*(__m64 *)((char *)a1 + a3), *(__m64 *)((char *)a2 + a3))), _m_psadbw(*(__m64 *)((char *)a1 + 2 * a3), *(__m64 *)((char *)a2 + 2 * a3))), _m_psadbw(*(__m64 *)((char *)a1 + 3 * a3), *(__m64 *)((char *)a2 + 3 * a3))), _m_psadbw((__m64)v3->m64_u64, (__m64)v4->m64_u64)), _m_psadbw(*(__m64 *)((char *)v3 + a3), *(__m64 *)((char *)v4 + a3))), _m_psadbw(*(__m64 *)((char *)v3 + 2 * a3), *(__m64 *)((char *)v4 + 2 * a3))), _m_psadbw(*(__m64 *)((char *)v3 + 3 * a3), *(__m64 *)((char *)v4 + 3 * a3))));
}
