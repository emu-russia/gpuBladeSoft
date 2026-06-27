void __cdecl sub_6F83CA1A(const void **a1, void **a2, void **a3)
{
  const void *v3; // [sp+1Ch] [bp-Ch]@1

  v3 = 0;
  if ( a1 )
    v3 = *a1;
  if ( v3 )
  {
    sub_6F83405C((int)v3, a3);
    sub_6F83405C((int)v3, a2);
    *a1 = 0;
    sub_6F83C8B5((int)v3);
    sub_6F83B294(v3);
  }
}
