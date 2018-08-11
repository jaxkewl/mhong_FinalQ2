	#pragma once

	class CompWindowIfc
	{
	public:
		virtual void open() = 0;
		virtual void close() = 0;
		virtual void move() = 0;
	};