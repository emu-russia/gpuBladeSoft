_BYTE *sub_6F8B4D50()
{
  _BYTE *result; // eax@1
  _BYTE *v1; // ebx@2
  char v2; // al@5
  int v3; // edx@6

  result = sub_6F8B3D30();
  if ( result )
  {
    v1 = result;
    if ( !(result[32] & 0xC) )
    {
      result = (_BYTE *)dword_70373588;
      if ( dword_70373588 )
      {
        sub_6F8B2F50((volatile signed __int32 *)v1 + 7);
        v2 = v1[32];
        if ( v2 & 3 )
        {
          v3 = *((_DWORD *)v1 + 9);
          if ( v3 & 1 )
          {
            if ( *((_DWORD *)v1 + 4) <= 0 )
            {
              *((_DWORD *)v1 + 9) = v3 & 0xFFFFFFFE;
              v1[32] = v2 & 0xF3 | 4;
              if ( *((_DWORD *)v1 + 6) )
                ResetEvent(*((HANDLE *)v1 + 6));
              sub_6F8B3270((volatile signed __int32 *)v1 + 7);
              sub_6F8B4C90();
            }
          }
        }
        result = (_BYTE *)sub_6F8B3270((volatile signed __int32 *)v1 + 7);
      }
    }
  }
  return result;
}
