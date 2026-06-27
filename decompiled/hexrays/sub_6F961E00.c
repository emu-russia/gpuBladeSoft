int __cdecl sub_6F961E00(_QWORD *a1)
{
  _DWORD *v1; // eax@1
  _QWORD *v2; // edi@1
  _QWORD *v3; // ebp@1
  int result; // eax@3
  int v5; // ecx@4
  int v6; // edx@4

  v1 = sub_6F962260();
  v2 = (_QWORD *)*v1;
  v3 = a1 - 6;
  if ( (unsigned __int64)(*a1 - 5138137972254386944i64) <= 1 )
  {
    v5 = *((_DWORD *)a1 - 7);
    v6 = 1 - v5;
    if ( v5 >= 0 )
      v6 = v5 + 1;
    *((_DWORD *)a1 - 7) = v6;
    --v1[1];
    if ( v2 != v3 )
    {
      *((_DWORD *)a1 - 8) = v2;
      *v1 = v3;
    }
    result = *((_DWORD *)a1 - 2);
  }
  else
  {
    if ( v2 )
      sub_6F95D3C0();
    *v1 = v3;
    result = 0;
  }
  return result;
}
