int __cdecl sub_6F79CE80(int a1, _DWORD *a2)
{
  _DWORD *v2; // eax@1
  int v3; // edx@1
  int v5; // [sp+1Ch] [bp-10h]@1

  *a2 = 0;
  v2 = sub_6F773A50(a1, 4, &v5);
  v3 = v5;
  if ( !v5 )
  {
    *v2 = a1;
    *a2 = v2;
  }
  return v3;
}
