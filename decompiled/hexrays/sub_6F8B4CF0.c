DWORD __usercall sub_6F8B4CF0@<eax>(unsigned int a1@<eax>)
{
  DWORD result; // eax@1
  DWORD v2; // ebx@2

  result = sub_6F8B3E80(a1);
  if ( result )
  {
    v2 = result;
    if ( !(*(_BYTE *)(result + 32) & 0xC) )
    {
      result = *(_DWORD *)(result + 104);
      if ( !result )
      {
        result = *(_DWORD *)(v2 + 36) & 3;
        if ( result == 3 )
        {
          result = WaitForSingleObject(*(HANDLE *)(v2 + 24), 0);
          if ( !result )
          {
            sub_6F8B3270((volatile signed __int32 *)(v2 + 28));
            sub_6F8B4C90();
          }
        }
      }
    }
  }
  return result;
}
