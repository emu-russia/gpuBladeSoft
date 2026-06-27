void __cdecl sub_6F75A490(int *a1)
{
  int v1; // ebx@1
  int v2; // ecx@6

  v1 = *a1;
  if ( *a1 >= 0 && dword_70259120[v1] >= 0 )
  {
    if ( dword_70259320[7 * v1] )
    {
      free((void *)dword_70259320[7 * v1]);
      dword_70259320[7 * v1] = 0;
    }
    v2 = 7 * v1;
    dword_70259324[v2] = 0;
    dword_7025932C[v2] = 0;
    dword_70259330[v2] = 0;
    dword_70259328[v2] = 0;
    dword_70259334[v2] = 0;
    dword_70259338[v2] = 0;
    dword_70259120[*a1] = -1;
  }
}
