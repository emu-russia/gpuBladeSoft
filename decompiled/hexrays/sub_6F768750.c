void *__cdecl sub_6F768750(int *a1)
{
  _DWORD *v1; // ebx@1
  void *result; // eax@1
  signed int v3; // eax@2
  void **v4; // ebx@3
  int v5; // esi@3
  void *v6; // ST1C_4@6

  v1 = sub_6F772CE0();
  result = (void *)7;
  if ( v1 )
  {
    v3 = sub_6F76F4A0((int)v1, a1);
    if ( v3 )
    {
      v6 = (void *)v3;
      j_free(v1);
      result = v6;
    }
    else
    {
      v4 = &off_6FB556A0;
      v5 = *a1;
      result = &unk_6FB6AF80;
      do
      {
        ++v4;
        sub_6F76ED70(v5, (int)result);
        result = *v4;
      }
      while ( *v4 );
    }
  }
  return result;
}
