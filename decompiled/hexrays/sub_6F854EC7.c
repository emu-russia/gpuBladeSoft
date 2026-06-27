void __cdecl sub_6F854EC7(const void **a1, void **a2)
{
  const void *v2; // [sp+1Ch] [bp-Ch]@2

  if ( a1 )
  {
    v2 = *a1;
    if ( *a1 )
    {
      sub_6F83405C((int)v2, a2);
      *a1 = 0;
      sub_6F854DA8((int)v2);
      sub_6F83B294(v2);
    }
  }
}
