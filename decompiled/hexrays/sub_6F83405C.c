void __cdecl sub_6F83405C(int a1, void **a2)
{
  void *v2; // [sp+1Ch] [bp-Ch]@1

  v2 = 0;
  if ( a1 )
  {
    if ( a2 )
      v2 = *a2;
    if ( v2 )
    {
      *a2 = 0;
      sub_6F8341B7(a1, (int)v2, 0x7FFF, -1);
      memset(v2, 0, 0x10Cu);
      sub_6F83B5A7(a1, (int)v2);
    }
  }
}
