void __cdecl sub_6F8B1A40(unsigned int a1)
{
  char *v1; // eax@4

  if ( (unsigned int)sub_6F8B19C0(0) <= a1 && a1 <= (unsigned int)sub_6F8B19C0(19) )
  {
    *(_DWORD *)(a1 + 12) &= 0xFFFF7FFF;
    v1 = sub_6F8B19C0(0);
    unlock(((signed int)(a1 - (_DWORD)v1) >> 5) + 16);
  }
  else
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  }
}
