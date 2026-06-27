int __usercall sub_6F86B168@<eax>(int result@<eax>)
{
  int v1; // edx@1

  v1 = *(_DWORD *)(result + 384);
  if ( *(_DWORD *)(result + 272) <= 1 )
  {
    if ( *(_DWORD *)(v1 + 8) < (unsigned int)(*(_DWORD *)(result + 268) - 1) )
    {
      result = *(_DWORD *)(*(_DWORD *)(result + 276) + 12);
      *(_DWORD *)(v1 + 20) = result;
      *(_DWORD *)(v1 + 12) = 0;
      *(_DWORD *)(v1 + 16) = 0;
    }
    else
    {
      result = *(_DWORD *)(*(_DWORD *)(result + 276) + 76);
      *(_DWORD *)(v1 + 20) = result;
      *(_DWORD *)(v1 + 12) = 0;
      *(_DWORD *)(v1 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 20) = 1;
    *(_DWORD *)(v1 + 12) = 0;
    *(_DWORD *)(v1 + 16) = 0;
  }
  return result;
}
