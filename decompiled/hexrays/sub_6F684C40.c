void __usercall sub_6F684C40(int a1@<eax>)
{
  int v1; // ebx@2
  void *v2; // ST00_4@3

  if ( a1 )
  {
    v1 = a1;
    do
    {
      sub_6F684C40(*(_DWORD *)(v1 + 12));
      v2 = (void *)v1;
      v1 = *(_DWORD *)(v1 + 8);
      j_free_1(v2);
    }
    while ( v1 );
  }
}
