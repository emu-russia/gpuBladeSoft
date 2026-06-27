_DWORD *__cdecl sub_6F8588D5(int a1, _DWORD *a2)
{
  _DWORD *result; // eax@1
  _DWORD *v3; // ST18_4@3
  _DWORD *v4; // [sp+1Ch] [bp-Ch]@1

  result = (_DWORD *)*a2;
  v4 = (_DWORD *)*a2;
  if ( *a2 )
  {
    *a2 = 0;
    do
    {
      v3 = (_DWORD *)*v4;
      sub_6F83B5A7(a1, (int)v4);
      result = v3;
      v4 = v3;
    }
    while ( v3 );
  }
  return result;
}
