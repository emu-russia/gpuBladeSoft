void sub_6F72AD00()
{
  int v0; // ebx@1
  void *v1; // ST00_4@2

  v0 = dword_6FBBFDD0;
  while ( v0 )
  {
    sub_6F684C40(*(_DWORD *)(v0 + 12));
    v1 = (void *)v0;
    v0 = *(_DWORD *)(v0 + 8);
    j_free_1(v1);
  }
}
