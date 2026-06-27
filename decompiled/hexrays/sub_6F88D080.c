signed int __usercall sub_6F88D080@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int v2; // eax@2

  v1 = a1;
  while ( 1 )
  {
    v2 = *(_DWORD *)(v1 + 44);
    if ( v2 == 1 )
      break;
    if ( v2 == 2 )
    {
      *(_DWORD *)(v1 + 100) = 2 * *(_DWORD *)(v1 + 24);
      *(_DWORD *)(v1 + 96) = *(_DWORD *)(v1 + 36);
      if ( sub_6F88CF20(v1) == -1 )
        return -1;
    }
    else if ( !v2 )
    {
      if ( sub_6F88CD50(v1) == -1 )
        return -1;
      if ( !*(_DWORD *)(v1 + 44) )
        return 0;
    }
    if ( *(_DWORD *)v1 || *(_DWORD *)(v1 + 52) && !*(_DWORD *)(v1 + 88) )
      return 0;
  }
  if ( sub_6F88CC30(v1, *(_DWORD *)(v1 + 36), 2 * *(_DWORD *)(v1 + 24), (unsigned int *)v1) != -1 )
  {
    *(_DWORD *)(v1 + 4) = *(_DWORD *)(v1 + 36);
    return 0;
  }
  return -1;
}
