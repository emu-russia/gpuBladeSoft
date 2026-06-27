signed int __stdcall ZN_GPUfreeze(int a1, _DWORD *a2)
{
  signed int result; // eax@4

  if ( a1 == 2 )
  {
    dword_6F96D020 = *a2 + 1;
    sub_6F72F480("State slot changed (%i)", dword_6F96D020);
    result = 1;
  }
  else
  {
    if ( a2 )
    {
      if ( *a2 == 1 )
        JUMPOUT(&loc_6F72F530);
    }
    result = 0;
  }
  return result;
}
