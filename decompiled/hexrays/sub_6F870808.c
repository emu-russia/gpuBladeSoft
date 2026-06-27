int __usercall sub_6F870808@<eax>(int result@<eax>)
{
  int v1; // edx@1

  v1 = *(_DWORD *)(result + 408);
  if ( *(_DWORD *)(result + 296) <= 1 )
  {
    if ( *(_DWORD *)(result + 128) < (unsigned int)(*(_DWORD *)(result + 288) - 1) )
    {
      result = *(_DWORD *)(*(_DWORD *)(result + 300) + 12);
      *(_DWORD *)(v1 + 28) = result;
      *(_DWORD *)(v1 + 20) = 0;
      *(_DWORD *)(v1 + 24) = 0;
    }
    else
    {
      result = *(_DWORD *)(*(_DWORD *)(result + 300) + 76);
      *(_DWORD *)(v1 + 28) = result;
      *(_DWORD *)(v1 + 20) = 0;
      *(_DWORD *)(v1 + 24) = 0;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 28) = 1;
    *(_DWORD *)(v1 + 20) = 0;
    *(_DWORD *)(v1 + 24) = 0;
  }
  return result;
}
