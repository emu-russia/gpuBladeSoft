_DWORD *__cdecl sub_6F762F10(unsigned int a1)
{
  unsigned int v1; // ebx@1
  _DWORD *v2; // eax@3
  _DWORD *v3; // esi@3

  v1 = a1;
  if ( a1 < 0x80 )
    v1 = 128;
  v2 = calloc(1u, 0x14u);
  v3 = v2;
  if ( v2 )
  {
    v2[1] = v1;
    v2[2] = calloc(v1, 4u);
    v3[3] = calloc(v1, 4u);
    v3[4] = calloc(v1, 4u);
  }
  return v3;
}
