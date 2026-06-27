int __cdecl sub_6F8A3660(CHAR *a1, __int16 a2)
{
  char *v2; // ebx@1
  int v3; // edi@3
  UINT v4; // eax@3
  char v6; // [sp+1Bh] [bp-11h]@2

  v2 = a1;
  if ( !a1 )
    v2 = &v6;
  v3 = __mb_cur_max_func();
  v4 = sub_6F8B1B80();
  return sub_6F8A35C0(v2, a2, v4, v3);
}
